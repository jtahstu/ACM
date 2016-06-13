/*------------------------------------------------------------------*/

const int maxn = 1000;
int n, s, e;
int path[maxn][maxn];
int b[maxn];
int rode[maxn][maxn];

void Solve()
{
    while(~scanf("%d", &n) && n)
    {
        for(int i = 1; i <= n; ++i)
        {
            for(int j = 1; j <= n; ++j)
            {
                scanf("%d", &path[i][j]);
                if(path[i][j] == -1)
                {
                    path[i][j] = INF;
                }
                rode[i][j] = j;
            }
        }
        for(int i = 1; i <= n; ++i)
        {
            scanf("%d", &b[i]);
        }
        for(int k = 1; k <= n; ++k)
        {
            for(int i = 1; i <= n; ++i)
            {
                for(int j = 1; j <= n; ++j)
                {
                    if(path[i][k]+path[k][j]+b[k] < path[i][j])
                    {
                        path[i][j] = path[i][k]+path[k][j]+b[k];
                        rode[i][j] = rode[i][k];
                    }
                    else if(path[i][j] == path[i][k]+path[k][j]+b[k] && rode[i][j] > rode[i][k])
                    {
                        rode[i][j] = rode[i][k];
                    }
                }
            }
        }
        while(~scanf("%d%d", &s, &e))
        {
            if(s == -1 && e == -1)
                break;
            printf("From %d to %d :\nPath: %d", s, e, s);
            int u = s, v = e;
            while(s != e)
            {
                printf("-->%d", rode[s][e]);
                s = rode[s][e];
            }
            printf("\n");
            printf("Total cost : %d\n\n", path[u][v]);
        }
    }
}

/*------------------------------------------------------------------*/

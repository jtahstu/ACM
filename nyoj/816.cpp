#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main() {
    string s;
    while(cin>>s) {
        bool flag=true;
        for(int i=0; i<s.length(); i++) {
            if(!isalnum(s[i])||(s[i]!="_"))//这里改成har数组就可以了，不搞了，ongjava干了
                flag=false;
            if(!isalpha(s[0])||s[0]!="_")
                flag=false;
        }
        if(flag)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
//正则表达式。。。
import java.io.BufferedInputStream;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner in = new Scanner(new BufferedInputStream(System.in));
        while (in.hasNext()) {
            System.out.println(in.next().matches("^[_a-zA-Z][_a-zA-Z\\d]*") ? "Yes" : "No");
        }
        in.close();
    }
}

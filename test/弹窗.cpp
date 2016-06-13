
#include<windows.h>
using namespace std;
int main() {
    MessageBox(NULL,TEXT("你是好人吗？"),TEXT("CHOOSE"),MB_YESNO|MB_ICONQUESTION);
    MessageBox(NULL,TEXT("等那么半天难道就为了一句“验证码错误”？一个多小时过去我终于评好了，想给老师打个A也是那么的千辛万苦，累哭了"),TEXT("小姑娘是你姿势不对！"),MB_OK|MB_ICONWARNING);
    MessageBox(NULL,TEXT("开始格式化C盘!哈哈"),TEXT("骗人了吧!"),MB_OK);
    MessageBox(NULL,TEXT("尝试把你变成好人失败，是否重试呢？"),TEXT("要做好人吗？"),MB_OK|MB_RETRYCANCEL);
    MessageBox(NULL,TEXT("坏蛋可以去死啦!"),TEXT("哎真让人替你悲哀呀"),MB_OK);
    return 0;
}

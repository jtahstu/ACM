
#include<windows.h>
using namespace std;
int main() {
    MessageBox(NULL,TEXT("���Ǻ�����"),TEXT("CHOOSE"),MB_YESNO|MB_ICONQUESTION);
    MessageBox(NULL,TEXT("����ô�����ѵ���Ϊ��һ�䡰��֤����󡱣�һ����Сʱ��ȥ�����������ˣ������ʦ���AҲ����ô��ǧ����࣬�ۿ���"),TEXT("С�����������Ʋ��ԣ�"),MB_OK|MB_ICONWARNING);
    MessageBox(NULL,TEXT("��ʼ��ʽ��C��!����"),TEXT("ƭ���˰�!"),MB_OK);
    MessageBox(NULL,TEXT("���԰����ɺ���ʧ�ܣ��Ƿ������أ�"),TEXT("Ҫ��������"),MB_OK|MB_RETRYCANCEL);
    MessageBox(NULL,TEXT("��������ȥ����!"),TEXT("�����������㱯��ѽ"),MB_OK);
    return 0;
}

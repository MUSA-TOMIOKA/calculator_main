#include <windows.h>
//コンソールアプリケーション用メイン
int main()
{

}



//GUIアプリケーション用メイン
int APIENTRY wWinMain
(_In_ HINSTANCE hInstance,       //インスタンスハンドル(モジュールハンドル)
_In_opt_ HINSTANCE hPrevInstance,//必ずnullになる()
_In_ LPWSTR    lpCmdLine,
_In_ int       nCmdShow
)
{
	return 0; //0は正常終了,0以外はエラー
}
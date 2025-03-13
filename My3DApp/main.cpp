#include "MyRender.h"

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "d3dcompiler.lib")
#pragma comment(lib, "dxguid.lib")

int main()
{
	Framework framework;

	MyRender* render = new MyRender();

	FrameworkDesc desc;
	desc.wnd.width = 640;
	desc.wnd.height = 480;
	desc.render = render;

	framework.Init(desc);

	framework.Run();

	framework.Close();

	return 0;
}
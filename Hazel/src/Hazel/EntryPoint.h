#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Init Log");
	int var = 5;
	HZ_INFO("Hello Var = {0}", var);



	printf("Hazel Engine \n");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS

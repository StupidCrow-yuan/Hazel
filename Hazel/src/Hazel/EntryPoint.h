#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main()
{
	printf("Begin Hazel Engine!\n");
	Hazel::Log::Init();
	auto log = Hazel::Log::GetCoreLogger();
	Hazel::Log::GetCoreLogger()->warn("core log");
	Hazel::Log::GetClientLogger()->warn("client log");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
	//return 0;
}
#endif // HZ_PLATFORM_WINDOWS
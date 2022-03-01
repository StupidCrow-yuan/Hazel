#pragma once

#include "spdlog/spdlog.h"
#include "Core.h"
#include <memory.h>

namespace Hazel 
{
	class HAZEL_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; };
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Log Macros
#define Hazel_CORE_TRACE(...)	::Hazel::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define Hazel_CORE_INFO(...)	::Hazel::Log::GetCoreLogger()->info(__VA_ARGS__)
#define Hazel_CORE_WARN(...)	::Hazel::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define Hazel_CORE_ERROR(...)	::Hazel::Log::GetCoreLogger()->error(__VA_ARGS__)
#define Hazel_CORE_FATAL(...)	::Hazel::Log::GetCoreLogger()->fatal(__VA_ARGS__)
		
#define Hazel_TRACE(...)	::Hazel::Log::GetClientLogger()->trace(__VA_ARGS__)
#define Hazel_INFO(...)	::Hazel::Log::GetClientLogger()->info(__VA_ARGS__)
#define Hazel_WARN(...)	::Hazel::Log::GetClientLogger()->warn(__VA_ARGS__)
#define Hazel_ERROR(...)	::Hazel::Log::GetClientLogger()->error(__VA_ARGS__)
#define Hazel_FATAL(...)	::Hazel::Log::GetClientLogger()->fatal(__VA_ARGS__)


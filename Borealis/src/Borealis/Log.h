#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Borealis {
	class BOREALIS_API Log
	{
	public:
		static void init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

//Core Log Macros
#define BS_CORE_TRACE(...)		::Borealis::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BS_CORE_INFO(...)		::Borealis::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BS_CORE_WARN(...)		::Borealis::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BS_CORE_ERROR(...)		::Borealis::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BS_CORE_CRITICAL(...)	::Borealis::Log::GetCoreLogger()->critical(__VA_ARGS__)

//Client Log Macros

#define BS_TRACE(...)			::Borealis::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BS_INFO(...)			::Borealis::Log::GetClientLogger()->info(__VA_ARGS__)
#define BS_WARN(...)			::Borealis::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BS_ERROR(...)			::Borealis::Log::GetClientLogger()->error(__VA_ARGS__)
#define BS_CRITICAL(...)		::Borealis::Log::GetClientLogger()->critical(__VA_ARGS__)
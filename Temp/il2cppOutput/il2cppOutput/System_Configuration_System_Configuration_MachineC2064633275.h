#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.ConfigurationFileMap
struct ConfigurationFileMap_t355685230;

#include "System_Configuration_System_Configuration_Internal3052580727.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.MachineConfigurationHost
struct  MachineConfigurationHost_t2064633275  : public InternalConfigurationHost_t3052580727
{
public:
	// System.Configuration.ConfigurationFileMap System.Configuration.MachineConfigurationHost::map
	ConfigurationFileMap_t355685230 * ___map_0;

public:
	inline static int32_t get_offset_of_map_0() { return static_cast<int32_t>(offsetof(MachineConfigurationHost_t2064633275, ___map_0)); }
	inline ConfigurationFileMap_t355685230 * get_map_0() const { return ___map_0; }
	inline ConfigurationFileMap_t355685230 ** get_address_of_map_0() { return &___map_0; }
	inline void set_map_0(ConfigurationFileMap_t355685230 * value)
	{
		___map_0 = value;
		Il2CppCodeGenWriteBarrier(&___map_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"
#include "System_System_ComponentModel_CollectionChangeActio3495844100.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t1734749345  : public EventArgs_t3289624707
{
public:
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	Il2CppObject * ___theElement_2;

public:
	inline static int32_t get_offset_of_changeAction_1() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1734749345, ___changeAction_1)); }
	inline int32_t get_changeAction_1() const { return ___changeAction_1; }
	inline int32_t* get_address_of_changeAction_1() { return &___changeAction_1; }
	inline void set_changeAction_1(int32_t value)
	{
		___changeAction_1 = value;
	}

	inline static int32_t get_offset_of_theElement_2() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1734749345, ___theElement_2)); }
	inline Il2CppObject * get_theElement_2() const { return ___theElement_2; }
	inline Il2CppObject ** get_address_of_theElement_2() { return &___theElement_2; }
	inline void set_theElement_2(Il2CppObject * value)
	{
		___theElement_2 = value;
		Il2CppCodeGenWriteBarrier(&___theElement_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

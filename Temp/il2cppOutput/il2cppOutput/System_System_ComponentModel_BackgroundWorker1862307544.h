#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.AsyncOperation
struct AsyncOperation_t2333945751;
// System.ComponentModel.DoWorkEventHandler
struct DoWorkEventHandler_t139609976;
// System.ComponentModel.ProgressChangedEventHandler
struct ProgressChangedEventHandler_t3522160029;
// System.ComponentModel.RunWorkerCompletedEventHandler
struct RunWorkerCompletedEventHandler_t3413286430;

#include "System_System_ComponentModel_Component332074787.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BackgroundWorker
struct  BackgroundWorker_t1862307544  : public Component_t332074787
{
public:
	// System.ComponentModel.AsyncOperation System.ComponentModel.BackgroundWorker::async
	AsyncOperation_t2333945751 * ___async_4;
	// System.Boolean System.ComponentModel.BackgroundWorker::cancel_pending
	bool ___cancel_pending_5;
	// System.Boolean System.ComponentModel.BackgroundWorker::report_progress
	bool ___report_progress_6;
	// System.Boolean System.ComponentModel.BackgroundWorker::support_cancel
	bool ___support_cancel_7;
	// System.ComponentModel.DoWorkEventHandler System.ComponentModel.BackgroundWorker::DoWork
	DoWorkEventHandler_t139609976 * ___DoWork_8;
	// System.ComponentModel.ProgressChangedEventHandler System.ComponentModel.BackgroundWorker::ProgressChanged
	ProgressChangedEventHandler_t3522160029 * ___ProgressChanged_9;
	// System.ComponentModel.RunWorkerCompletedEventHandler System.ComponentModel.BackgroundWorker::RunWorkerCompleted
	RunWorkerCompletedEventHandler_t3413286430 * ___RunWorkerCompleted_10;

public:
	inline static int32_t get_offset_of_async_4() { return static_cast<int32_t>(offsetof(BackgroundWorker_t1862307544, ___async_4)); }
	inline AsyncOperation_t2333945751 * get_async_4() const { return ___async_4; }
	inline AsyncOperation_t2333945751 ** get_address_of_async_4() { return &___async_4; }
	inline void set_async_4(AsyncOperation_t2333945751 * value)
	{
		___async_4 = value;
		Il2CppCodeGenWriteBarrier(&___async_4, value);
	}

	inline static int32_t get_offset_of_cancel_pending_5() { return static_cast<int32_t>(offsetof(BackgroundWorker_t1862307544, ___cancel_pending_5)); }
	inline bool get_cancel_pending_5() const { return ___cancel_pending_5; }
	inline bool* get_address_of_cancel_pending_5() { return &___cancel_pending_5; }
	inline void set_cancel_pending_5(bool value)
	{
		___cancel_pending_5 = value;
	}

	inline static int32_t get_offset_of_report_progress_6() { return static_cast<int32_t>(offsetof(BackgroundWorker_t1862307544, ___report_progress_6)); }
	inline bool get_report_progress_6() const { return ___report_progress_6; }
	inline bool* get_address_of_report_progress_6() { return &___report_progress_6; }
	inline void set_report_progress_6(bool value)
	{
		___report_progress_6 = value;
	}

	inline static int32_t get_offset_of_support_cancel_7() { return static_cast<int32_t>(offsetof(BackgroundWorker_t1862307544, ___support_cancel_7)); }
	inline bool get_support_cancel_7() const { return ___support_cancel_7; }
	inline bool* get_address_of_support_cancel_7() { return &___support_cancel_7; }
	inline void set_support_cancel_7(bool value)
	{
		___support_cancel_7 = value;
	}

	inline static int32_t get_offset_of_DoWork_8() { return static_cast<int32_t>(offsetof(BackgroundWorker_t1862307544, ___DoWork_8)); }
	inline DoWorkEventHandler_t139609976 * get_DoWork_8() const { return ___DoWork_8; }
	inline DoWorkEventHandler_t139609976 ** get_address_of_DoWork_8() { return &___DoWork_8; }
	inline void set_DoWork_8(DoWorkEventHandler_t139609976 * value)
	{
		___DoWork_8 = value;
		Il2CppCodeGenWriteBarrier(&___DoWork_8, value);
	}

	inline static int32_t get_offset_of_ProgressChanged_9() { return static_cast<int32_t>(offsetof(BackgroundWorker_t1862307544, ___ProgressChanged_9)); }
	inline ProgressChangedEventHandler_t3522160029 * get_ProgressChanged_9() const { return ___ProgressChanged_9; }
	inline ProgressChangedEventHandler_t3522160029 ** get_address_of_ProgressChanged_9() { return &___ProgressChanged_9; }
	inline void set_ProgressChanged_9(ProgressChangedEventHandler_t3522160029 * value)
	{
		___ProgressChanged_9 = value;
		Il2CppCodeGenWriteBarrier(&___ProgressChanged_9, value);
	}

	inline static int32_t get_offset_of_RunWorkerCompleted_10() { return static_cast<int32_t>(offsetof(BackgroundWorker_t1862307544, ___RunWorkerCompleted_10)); }
	inline RunWorkerCompletedEventHandler_t3413286430 * get_RunWorkerCompleted_10() const { return ___RunWorkerCompleted_10; }
	inline RunWorkerCompletedEventHandler_t3413286430 ** get_address_of_RunWorkerCompleted_10() { return &___RunWorkerCompleted_10; }
	inline void set_RunWorkerCompleted_10(RunWorkerCompletedEventHandler_t3413286430 * value)
	{
		___RunWorkerCompleted_10 = value;
		Il2CppCodeGenWriteBarrier(&___RunWorkerCompleted_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

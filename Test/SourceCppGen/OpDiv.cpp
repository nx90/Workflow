/***********************************************************************
Generated from ../Resources/Codegen/OpDiv.txt
***********************************************************************/

#include "OpDiv.h"

#define GLOBAL_SYMBOL ::vl_workflow_global::OpDiv::
#define GLOBAL_NAME ::vl_workflow_global::OpDiv::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::OpDiv::Instance()

/***********************************************************************
Global Variables and Functions
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_OpDiv)
	vl_workflow_global::OpDiv instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_OpDiv)

namespace vl_workflow_global
{
	::vl::WString OpDiv::main()
	{
		auto b = false;
		auto i8 = static_cast<::vl::vint8_t>(1);
		auto i16 = static_cast<::vl::vint16_t>(2);
		auto i32 = 4;
		auto i64 = static_cast<::vl::vint64_t>(8);
		auto u8 = static_cast<::vl::vuint8_t>(1);
		auto u16 = static_cast<::vl::vuint16_t>(2);
		auto u32 = static_cast<::vl::vuint32_t>(4);
		auto u64 = static_cast<::vl::vuint64_t>(8);
		auto f32 = static_cast<float>(1.5);
		auto f64 = static_cast<double>(3);
		auto s = ::vl::WString(L"text", false);
		return ((((((((((((::vl::__vwsn::ToString((static_cast<::vl::vint32_t>(i8) / static_cast<::vl::vint32_t>(i16))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString((static_cast<::vl::vint32_t>(i16) / i32))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString((static_cast<::vl::vint64_t>(i32) / i64))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString((static_cast<::vl::vuint32_t>(u8) / static_cast<::vl::vuint32_t>(u16)))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString((static_cast<::vl::vuint32_t>(u16) / u32))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString((static_cast<::vl::vuint64_t>(u32) / u64))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString((static_cast<double>(f32) / f64)));
	}

	OpDiv& OpDiv::Instance()
	{
		return Getvl_workflow_global_OpDiv().instance;
	}
}

#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ

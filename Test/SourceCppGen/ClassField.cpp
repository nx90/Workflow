/***********************************************************************
Generated from ../Resources/Codegen/ClassField.txt
***********************************************************************/

#include "ClassField.h"

#define GLOBAL_SYMBOL ::vl_workflow_global::ClassField::
#define GLOBAL_NAME ::vl_workflow_global::ClassField::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::ClassField::Instance()

/***********************************************************************
Global Variables and Functions
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_ClassField)
	vl_workflow_global::ClassField instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_ClassField)

namespace vl_workflow_global
{
	::vl::WString ClassField::main()
	{
		auto s = ::vl::WString(L"", false);
		auto a = ::vl::Ptr<::test::PointClass>(new ::test::PointClass());
		auto b = ::vl::Ptr<::test::PointClass>(new ::test::PointClass());
		(::vl::__vwsn::This(b.Obj())->x = 1);
		(::vl::__vwsn::This(b.Obj())->y = 2);
		return (((((((((((::vl::WString(L"", false) + ::vl::__vwsn::ToString(::vl::__vwsn::This(a.Obj())->x)) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(::vl::__vwsn::This(a.Obj())->y)) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(::vl::__vwsn::This(b.Obj())->x)) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(::vl::__vwsn::This(b.Obj())->y)) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString((a.Obj() == a.Obj()))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString((a.Obj() == b.Obj())));
	}

	ClassField& ClassField::Instance()
	{
		return Getvl_workflow_global_ClassField().instance;
	}
}


#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ


#include "getobject.hpp"
#include "binaryview.hpp"
#include "function.hpp"
#include "basicblock.hpp"
#include "lowlevelil.hpp"
#include "mediumlevelil.hpp"
#include "highlevelil.hpp"


BNBinaryView* BinaryNinja::GetView(Ref<BinaryView> view)
{
	return view->GetObject();
}

BNBinaryView* BinaryNinja::GetObject(Ref<BinaryView> view)
{
	return view ? view->GetObject() : nullptr;
}

BNFunction* BinaryNinja::GetFunction(Ref<Function> func)
{
	return func ? func->GetObject() : nullptr;
}

BNBasicBlock* BinaryNinja::GetBasicBlock(Ref<BasicBlock> block)
{
	return block ? block->GetObject() : nullptr;
}

BNFunction* BinaryNinja::GetObject(Ref<Function> view)
{
	return obj ? obj->GetObject() : nullptr;
}

BNBasicBlock* BinaryNinja::GetObject(Ref<BasicBlock> obj)
{
	return obj ? obj->GetObject() : nullptr;
}

BNLowLevelILFunction* GetObject(Ref<LowLevelILFunction> obj)
{
	return obj ? obj->GetObject() : nullptr;
}


BNMediumLevelILFunction* GetObject(Ref<MediumLevelILFunction> obj)
{
	return obj ? obj->GetObject() : nullptr;
}


BNHighLevelILFunction* GetObject(Ref<HighLevelILFunction> obj)
{
	return obj ? obj->GetObject() : nullptr;
}




Ref<BinaryView> BinaryNinja::CreateNewReferencedView(BNBinaryView* view)
{
	return view ? new BinaryView(BNNewViewReference(view)) : nullptr;
}

Ref<BinaryView> BinaryNinja::CreateNewView(BNBinaryView* view)
{
	return new BinaryView(view)
}

Ref<Function> BinaryNinja::CreateNewReferencedFunction(BNFunction* func)
{
	return func ? new Function(BNNewFunctionReference(func)) : nullptr;
}


Ref<BasicBlock> BinaryNinja::CreateNewReferencedBasicBlock(BNBasicBlock* block)
{
	return block ? new BasicBlock(BNNewBasicBlockReference(block)) : nullptr;
}


Ref<LowLevelILFunction> BinaryNinja::CreateNewReferencedLowLevelILFunction(BNLowLevelILFunction* func)
{
	return func ? new LowLevelILFunction(BNNewLowLevelILFunctionReference(func)) : nullptr;
}


Ref<MediumLevelILFunction> BinaryNinja::CreateNewReferencedMediumLevelILFunction(BNMediumLevelILFunction* func)
{
	return func ? new MediumLevelILFunction(BNNewMediumLevelILFunctionReference(func)) : nullptr;
}


Ref<HighLevelILFunction> BinaryNinja::CreateNewReferencedHighLevelILFunction(BNHighLevelILFunction* func)
{
	return func ? new HighLevelILFunction(BNNewHighLevelILFunctionReference(func)) : nullptr;
}


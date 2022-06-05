#pragma once

#include "refcount.hpp"
// Since some headers are so large and takes a while to compile
// and *most* files don't even need to access members they can instead
// include this file saving considerable compile time
struct BNBinaryView;
struct BNFunction;
struct BNBasicBlock;
struct BNLowLevelILFunction;
struct BNMediumLevelILFunction;
struct BNHighLevelILFunction;

namespace BinaryNinja {
	class BinaryView;
	class Function;
	class BasicBlock;
	class LowLevelILFunction;
	class MediumLevelILFunction;
	class HighLevelILFunction;

	BNBinaryView* GetView(Ref<BinaryView> view);
	BNFunction* GetFunction(Ref<Function> view);
	BNBasicBlock* GetBasicBlock(Ref<BasicBlock> view);

	BNBinaryView* GetObject(Ref<BinaryView> view);
	BNFunction* GetObject(Ref<Function> view);
	BNBasicBlock* GetObject(Ref<BasicBlock> view);
	BNLowLevelILFunction* GetObject(Ref<LowLevelILFunction> view);
	BNMediumLevelILFunction* GetObject(Ref<MediumLevelILFunction> view);
	BNHighLevelILFunction* GetObject(Ref<HighLevelILFunction> view);

	Ref<BinaryView> CreateNewReferencedView(BNBinaryView* view);
	Ref<BinaryView> CreateNewView(BNBinaryView* view);
	Ref<Function> CreateNewReferencedFunction(BNFunction* view);
	Ref<BasicBlock> CreateNewReferencedBasicBlock(BNBasicBlock* view);
	Ref<LowLevelILFunction> CreateNewReferencedLowLevelILFunction(BNLowLevelILFunction* func);
	Ref<MediumLevelILFunction> CreateNewReferencedMediumLevelILFunction(BNMediumLevelILFunction* func);
	Ref<HighLevelILFunction> CreateNewReferencedHighLevelILFunction(BNHighLevelILFunction* func);
}
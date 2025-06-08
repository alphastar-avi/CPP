#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

int main() {
    LLVMContext Context;
    Module *ModuleObj = new Module("My Module", Context);
    IRBuilder<> Builder(Context);

    // Function signature: int add(int a, int b)
    FunctionType *funcType = FunctionType::get(Type::getInt32Ty(Context),
    {Type::getInt32Ty(Context), Type::getInt32Ty(Context)},
    false);
    Function *addFunc = Function::Create(funcType, Function::ExternalLinkage, "add", ModuleObj);

    // Create an entry block
    BasicBlock *Entry = BasicBlock::Create(Context, "entry", addFunc);
    Builder.SetInsertPoint(Entry);

    // Get function arguments`
    auto args = addFunc->args();
    Value *a = addFunc->getArg(0);
    Value *b = addFunc->getArg(1);

    // Add the two numbers
    Value *sum = Builder.CreateAdd(a, b, "sum");

    // Return the result
    Builder.CreateRet(sum);

    // Verify the function
    verifyFunction(*addFunc);

    // Print the LLVM IR to stdout
    ModuleObj->print(outs(), nullptr);
    delete ModuleObj;
    return 0;
}

#include <node.h>

namespace helloworld {
    
    using v8::FunctionCallbackInfo;
    using v8::Isolate;
    using v8::Local;
    using v8::Object;
    using v8::String;
    using v8::Value;
    
    void greet(const FunctionCallbackInfo<Value> &args) {
        Isolate *isolate = args.GetIsolate();
        args.GetReturnValue().Set(String::NewFromUtf8(isolate, "Hello, World!!"));
    }
    
    void init(Local<Object> exports) {
        NODE_SET_METHOD(exports, "helloworld", greet);
    }
    
    NODE_MODULE(addon, init)
    
}

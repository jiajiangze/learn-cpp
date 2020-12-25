//例如，您可能会写一个名为 xyz() 的函数，在另一个可用的库中也存在一个相同的函数 xyz()。这样，编译器就无法判断您所使用的是哪一个 xyz() 函数。
//因此，引入了命名空间这个概念，专门用于解决上面的问题，它可作为附加信息来区分不同库中相同名称的函数、类、变量等。使用了命名空间即定义了上下文。
//本质上，命名空间就是定义了一个范围。
//
//您可以使用 using namespace 指令，这样在使用命名空间时就可以不用在前面加上命名空间的名称。
//
//using 指令也可以用来指定命名空间中的特定项目。例如，如果您只打算使用 std 命名空间中的 cout 部分，您可以使用如下的语句：
using std::cout;

//命名空间可以定义在几个不同的部分中，因此命名空间是由几个单独定义的部分组成的。
//一个命名空间的各个组成部分可以分散在多个文件中。
//所以，如果命名空间中的某个组成部分需要请求定义在另一个文件中的名称，则仍然需要声明该名称。
//下面的命名空间定义可以是定义一个新的命名空间，也可以是为已有的命名空间增加新的元素：
namespace namespace_name {
   // 代码声明
}

//命名空间可以嵌套，您可以在一个命名空间中定义另一个命名空间，如下所示：
namespace namespace_name1 {
   // 代码声明
   namespace namespace_name2 {
      // 代码声明
   }
}

//您可以通过使用 :: 运算符来访问嵌套的命名空间中的成员：
// 访问 namespace_name2 中的成员
using namespace namespace_name1::namespace_name2;
 
// 访问 namespace:name1 中的成员
using namespace namespace_name1;


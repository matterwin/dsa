auto init = []()
{ ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  return 'c';
}();

auto init = []() { ... }(); 
// is the lambda function and immediately calls itself at the end () to start the optimization
// The [](){ ... } syntax defines a lambda function, and the () at the end of the lambda function immediately calls it

ios::sync_with_stdio(false); 
// turns off the synchronization between C++ streams (like cin and cout) and the C standard I/O streams (like stdin and stdout)
// once you turn this off you can no longer mix C and C++ code respectively for their stream/io libraries

cin.tie(nullptr);
cout.tie(nullptr);
// this unties the cin and cout from its tied output and tied input stream respectively.
// if you don't use these commands, then there isn't a lot of benefit to untie them
// also, when you untie them, then you have to manually flush the two streams respectively
// the purpose of flushing is to clear what's in the input or output buffer, so a new prompt could be freshly made

return 'c';
// an arbitrary value returned by the lambda (idk what it means really if there is more to it)

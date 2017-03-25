int main() 
{
  static_assert("C++17");
  int a[3] = { 0, 1, 2 };
  a[3] = 4; //Access violation
}

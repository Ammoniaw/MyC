# C-shining

## 0001 - *scanf()* 的缓存机制

- 该函数会维护一个内部缓冲区

  ```c
  int a;
  scanf("%d", &a); // 如果程序执行后，输入对应格式的数据，缓冲区的数据进行清空，程序随后出现的scanf函数也会得以正常使用
  ```

- 如果输入了不对应的数据格式

  ```c
  int a;
  scanf("%d", a);
  /*
  如果程序编译执行后输入了一个字符，那么scanf()函数就直接返回了，并且该字符会存在于函数内部缓冲区中。如果接下来的代码中还有调用scanf()函数，如果还不输入正确的代码，那仍然会出现上述问题，知道输入正确格式。
  */
  ```

- 如何清空其内部缓冲区的数据

  ```
  scanf("%*c"); 
  ```

  
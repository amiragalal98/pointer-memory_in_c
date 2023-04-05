# pointer-memory_in_c
<ul>
  <li>The base unit of memory is a byte.</li>
  <li>Memory is represented as a block of bytes.</li>
  <li>These bytes have an associated address which is represented by a hexadecimal number.</li>
<li>When a program is running, it is the responsibility of the underlying operating system to reserve a block of RAM for the program.</li>
<li>A pointer is a special type of integer variable that stores the memory address of a regular variable.</li>
  <li>A pointer can store the address of any type of variable, including other pointers.</li>
<li>The address stored in a pointer is the address of the first byte of memory that stores a variable.</li>
  <li>A pointer can be declared in two ways:</li>
dataType* nameOfPointer;<br>
  dataType *nameOfPointer;<br>
<li>To obtain the address of a variable such that it may be assigned to a pointer, the reference operator (&) is used. Syntax:
  &variableName;</li>
<li>Accessing data that is stored in a memory address pointed to by a pointer is done using the dereference operator (*). Syntax:
  *pointerName</li>
  <li>Pointer arithmetic is allowed but only for addition and subtraction by an integer.</li>
  <li>It is not possible to add/subtract one pointer to/from another pointer.</li>
  <li>Incrementing or decrementing a pointer is done in the following way:</li>
pointer += someInteger;<br>
pointer -= someInteger;<br>
<li>Incrementing/decrementing a pointer changes the address by n times the size of the data type the pointer is pointing to.</li>
<li>Because an array is stored as a contiguous block of memory, a pointer can be used to traverse it.</li>
<li>Great care must be exercised when using a pointer as it is possible to accidentally corrupt data stored in other memory addresses.</li>
</ul>

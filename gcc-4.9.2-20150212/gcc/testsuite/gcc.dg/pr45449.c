/* { dg-do compile } */
/* { dg-options "-O2 -fno-tree-pre -fno-tree-pta -fcompare-debug" } */
/* { dg-xfail-if "" { powerpc-ibm-aix* } { "*" } { "" } } */

struct S
{
};

void
baz (void)
{
  struct S s;
  &s;
}

int bar (void);

void
foo (void)
{
  if (bar ())
    baz ();
}

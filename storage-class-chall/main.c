
static double tempG = 1.0f; // file scoped var
extern double globalF = 2.0f; // global var

int main() {
   static float pFloat = 3.0f; // variable with a static value
   register int regVar = 4; // register variable for potential performance optimization
   int temp = 1; // block scoped var
   return 0;
}


static int foo() { // file scoped function
   return 0;
}
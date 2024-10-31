//In the comments after each problem functions' names are provided. Your task to define correct datatype and parameters.
//DO NOT CHANGE FUNCTIONS' NAMES.
//You may check your functions in main.cpp as shown by exampleFunction;
void exampleFunction() {
    std::cout<<"Example Function that can be called in main."<<std::endl;
}

// Problem 1
int floorFunction(float x) {
    int integer=x;
    return integer;
}
int ceilingFunction(float x) {
    int integer=x;
    if (x==integer) {
      return integer;
    } else {
      integer+=1;
      return integer;
    }
}

// Problem 2
void swap_values(int &x, int &y) {
    x=x+y;
    y=x-y;
    x=x-y;
}


// Problem 3
int multiply(int x, int y) {
    if (y == 0) {
        return 0;
    } else {
        return x + multiply(x, y-1);
    }
}


// Problem 4
int digitSum(int x) {
    if (x == 0) {
        return 0;
    } else {
        return x%10 + digitSum(x/10);
    }
}

// Problem 5
int decimalToBinary(int x) {
  if(x<2) return x;
  return decimalToBinary(x/2)*10+x%2;
}

// Problem 6
int midValue(int a, int b, int c) {
    if ((a > b && a < c) || (a > c && a < b)) {
        return a;
    } else if ((b > a && b < c) || (b > c && b < a)) {
        return b;
    } else {
        return c;
    }
}

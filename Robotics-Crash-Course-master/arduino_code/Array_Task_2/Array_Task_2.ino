// Array Task 2

int len = 100;

void setup() {
  Serial.begin(9600);

  // Creates an array of size len
  int arr[len];
  
  // Fills the array with random values
  for(int i = 0; i < len; i++){
    int r = random(1000);
    arr[i] = r;
  }

  
}

void loop() {}

// Fill in function that will return the largest value in the array
int findMax(int arr[], int len){
  int maximum = arr[0];
  for (int i = 1; i < len; i++){
    if (arr[i] > maximum){
      int maximum = arr[i];
    }
  }
  return maximum;
}

// Fill in function that will return the smallest value in the array
int findMin(int arr[], int len){
  int minimum = arr[0];
  for (int i = 1; i < len; i++){
    if (arr[i] < minimum){
      int minimum = arr[i];
      
    }
  }
  return minimum;
}

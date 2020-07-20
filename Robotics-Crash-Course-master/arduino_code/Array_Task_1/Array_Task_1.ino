// Array Task 1

void setup() {
  Serial.begin(9600);
  int arr[10];
  
  int i = 0;
  while (i<10){
    arr[i] = 3 * (i + 1);
    i++;
  }

  // Creat an array of type int and size 10:

  // Using a while loop, fill the array with multiples of 3 between 3 and 30 (inclusive):
                // Remember the syntax?
                // while (condition) {
                //       code...
                // }            


  for (int j = 1; j < 10; j++){
    arr[j - 1] = 3 * j;
    
  }
  // Rewrite the code above with a for loop:
                // Remember the syntax?
                // for (initialization; condition; update variable) {
                //       code...
                // }



  // Write a loop that will go through the array 
  //     and print any values that are a multiple of 9:
                // Hint: Use the % (modulus) operator.
  for (int k = 0; k < 10; k++){
    if (arr[k] %9 == 0){
      Serial.println(arr[k]);
    }
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}

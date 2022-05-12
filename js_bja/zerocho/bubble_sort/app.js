// bubble sort
/* const bubbleSotr = (arr) => {
  const length = arr.length;
  for (let i = 0; i < length - 1; i++) {
    for (let j = 0; j < length - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  return arr;
};

console.log(bubbleSotr([5, 1, 7, 4, 6, 3, 2, 8])); */

/* const bubbleSort = (arr) => {
  let i, j, temp;
  for (i = 1; i < arr.length; i++) {
    for (j = 1; j < arr.length - i; j++) {
      if (arr[j - 1] > arr[j]) {
        temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
      }
    }
  }
  const result = arr;
  return result;
}; */

function bubbleSort(arr) {
  for (let i = 0; i < arr.length - 2; i++) {
    for (let j = 1; j < arr.length - i; j++) {
      if (arr[j - 1] > arr[j]) {
        let temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
      }
    }
  }
  return arr;
}

console.log(bubbleSort([8, 5, 1, 7, 4, 6, 3, 2]));

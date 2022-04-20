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

const bubbleSotr = (arr) => {
  const length = arr.length;
  for (let i = 0; i < length; i++) {
    // -i를 통해서 정렬된 뒷 부분은 진행하지 않는 절약이 핵심 같음
    for (let j = 1; j < length - i; j++) {
      if (arr[j - 1] > arr[j]) {
        const temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
      }
    }
  }
  return arr;
};

console.log(bubbleSotr([5, 1, 7, 4, 6, 3, 2, 8]));

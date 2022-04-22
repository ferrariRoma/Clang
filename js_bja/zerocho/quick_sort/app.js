// 정렬부분
const partition = (array, left, right, pivotIndex) => {
  let temp;
  const pivot = array[pivotIndex];
  while (left <= right) {
    // 조건이 충족되면 반복문 다음의 if문으로 넘어가기
    while (array[left] < pivot) {
      left++;
    }
    while (array[right] > pivot) {
      right--;
    }
    if (left <= right) {
      temp = array[left];
      array[left] = array[right];
      array[right] = temp;
    }
  }
  temp = array[pivotIndex];
  array[pivotIndex] = array[left];
  array[left] = temp;
  return left;
};

// 재귀부분
const quickSort = (array, left, right) => {
  // 초기화
  if (!left) left = 0;
  if (!right) right = array.length - 1;
  // 피봇 초기화
  let pivotIndex = right;
  // 정렬시작
  pivotIndex = partition(array, left, right - 1, pivotIndex);
  // 재귀시작
  if (left < pivotIndex - 1) {
    quickSort(array, left, pivotIndex - 1);
  }
  if (right > pivotIndex + 1) {
    quickSort(array, pivotIndex + 1, right);
  }
  return array;
};

console.log(quickSort([4, 1, 7, 6, 3, 8, 2, 5]));

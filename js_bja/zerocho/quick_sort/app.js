/* // 정렬부분
const partition = (array, left, right, pivotIndex) => {
  let temp;
  // 기준 인덱스 셋팅
  const pivot = array[pivotIndex];
  while (left <= right) {
    // 조건이 충족되면 반복문 다음의 if문으로 넘어가기
    while (array[left] < pivot) {
      left++;
    }
    while (array[right] > pivot) {
      right--;
    }
    // while조건문이 충족되면 왼쪽,오른쪽 수를 바꿔준다.
    if (left <= right) {
      temp = array[left];
      array[left] = array[right];
      array[right] = temp;
    }
  }
  // 완료가 되면 기준과 array[left]위치를 바꿔준다.
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
  // -1을 하는 것은 pivotIndex 바로 왼쪽을 오른쪽 끝 기준으로 잡아야 하기 때문!
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
 */

const partition = (arr, left, right, pivotIndex) => {
  let temp;
  const pivot = arr[pivotIndex];
  // 최소기준 설정
  while (left <= right) {
    // 기준보다 왼쪽이 클 때, 오른쪽이 작을 때
    while (arr[left] < pivot) {
      left++;
    }
    while (arr[right] > pivot) {
      right--;
    }
    // 그때 좌우 교체
    if (left <= right) {
      temp = arr[right];
      arr[right] = arr[left];
      arr[left] = temp;
    }
  }
  //
  temp = arr[pivotIndex];
  arr[pivotIndex] = arr[left];
  arr[left] = temp;
  return left;
};

const quickSort = (arr, left, right) => {
  // 초기 설정
  if (!left) left = 0;
  if (!right) right = arr.length - 1;
  // 기준 설정
  let pivotIndex = right;
  // 정렬하기
  // 정렬 결과로는 왼쪽 기준값을 가지고 와야 한다.
  pivotIndex = partition(arr, left, right - 1, pivotIndex);
  // 재귀하기
  if (left < pivotIndex - 1) {
    quickSort(arr, left, pivotIndex - 1);
  }
  if (pivotIndex + 1 < right) {
    quickSort(arr, pivotIndex + 1, right);
  }
  return arr;
};

console.log(quickSort([4, 1, 7, 6, 3, 8, 2, 5]));

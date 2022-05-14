// 계수 정렬(counting sort)

/* function countingSort(arr, k) {
  let count = [],
    result = [];
  // 먼저, 모든 숫자의 개수를 0으로 초기화
  for (let i = 0; i <= k; i++) {
    count[i] = 0;
  }

  // 숫자의 개수를 세어 저장합니다.
  for (let j = 0; j < arr.length; j++) {
    count[arr[j]] += 1;
  }

  // 누적합을 구합니다.
  for (i = 0; i < k; i++) {
    count[i + 1] += count[i];
  }

  // 누적합이 가리키는 인덱스를 바탕으로 결과에 숫자를 집어넣는다.
  for (j = 0; j < arr.length; j++) {
    result[count[arr[j]] - 1] = arr[j];
    count[arr[j]] -= 1;
  }
  return result;
} */
function countingSort(arr, k) {
  let result = [],
    count = [];
  // <=을 쓰는 이유는 숫자 갯수 만큼 0으로 초기화 하기 위해서이다.
  for (let i = 0; i <= k; i++) {
    count[i] = 0;
  }
  console.log("1단계_ 0으로 초기화: ", count);
  for (let j = 0; j < arr.length; j++) {
    count[arr[j]] += 1;
  }
  console.log("2단계_ 카운트: ", count);
  for (i = 0; i < k; i++) {
    count[i + 1] += count[i];
  }
  console.log("3단계_ 종합: ", count);
  for (j = 0; j < arr.length; j++) {
    result[count[arr[j]] - 1] = arr[j];
    count[arr[j]] -= 1;
  }
  return result;
}
console.log(countingSort([3, 4, 0, 1, 2, 4, 2, 4], [4]));

function solution(new_id) {
  let recoId = new String(new_id);
  recoId = recoId
    .toLowerCase()
    .replace(/[^a-z0-9-_\.]/g, "")
    .replace(/(\.\.+)/g, ".")
    .replace(/(^(\.)|(\.)$)/g, "")
    .replace(/^$/g, "a")
    .slice(0, 15)
    .replace(/(\.)$/g, "");

  recoId =
    recoId.length <= 2
      ? recoId + recoId.charAt(recoId.length - 1).repeat(3 - recoId.length)
      : recoId;
  answer = recoId;
  return answer;
}

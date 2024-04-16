// 주어진 문장
let sentence = "마인드웨이"

// 문장의 길이 계산
let length = sentence.count

// for 문을 사용하여 각 줄을 출력
for i in 0..<length {
    // 문자열 회전하여 새로운 줄 생성
    let rotatedSentence = String(sentence.dropFirst(i) + sentence.prefix(i))
    print(rotatedSentence)
}
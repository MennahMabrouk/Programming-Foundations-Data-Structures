var perStudentPetCout = [0,1,0,2,1,1,4,0,0,0,3,2,1,3,0,2,2,4]

var numOfStudents = perStudentPetCout.count

//sumOfItem / numOfStudent

print(perStudentPetCout[3])

//print(perStudentPetCout[100])

print(numOfStudents)

var sum = 0

for individualPetCount in perStudentPetCout {
    sum = sum + individualPetCount
}

print(sum)

var average = sum / numOfStudents

print(average)

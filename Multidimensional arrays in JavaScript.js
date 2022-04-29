var dinnerChoices = [["Salad","Soup","Cheese Plate"],["Chicken","Salmon","Lasagna"]]

let appIndex=0
let mainDishIndex = 1

let FristApp = dinnerChoices[appIndex][0]
let SecondApp = dinnerChoices[appIndex][1]
let ThridMainDish = dinnerChoices[mainDishIndex][2]

console.log(FristApp)
console.log(SecondApp)
console.log(ThridMainDish)

dinnerChoices[mainDishIndex][0]="Steak"
console.log(dinnerChoices[mainDishIndex][0])

console.log(dinnerChoices)

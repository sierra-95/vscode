let string='The sun is shining and the weather is sweet'
let lower_case_string=string.toLowerCase()
let arraystring=lower_case_string.split(' ');//turn to array
let repetitive=arraystring.filter((item, index) => arraystring.indexOf(item) !== index)
console.log(repetitive)
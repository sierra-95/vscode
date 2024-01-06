//Promises represent the result of an asynchronous operation that may succeed or fail in the future.
fetch('https://google.com')
    .then(response => {
        return response.json();
    })
    .then(data => {
        console.log(data);
    })
    .catch(error =>{
        console.log(error);
    })
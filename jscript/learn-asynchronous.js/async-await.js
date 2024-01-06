//Async functions were introduced in ES2017 to simplify working with promises.
async function fetchdata()
{
    try{
        const response= await fetch('https://google.com');
        const data= await response.json();
        console.log(data);
    }
    catch(error)
    {
        console.log(error);
    }
}
fetchdata()
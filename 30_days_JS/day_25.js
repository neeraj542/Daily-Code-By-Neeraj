function fetchDataFromAPI(apiUrl) {
    return fetch(apiUrl)
        .then(response => {
            if (!response.ok) {
                throw new Error(`Error: ${response.status}`);
            }
            return response.json();
        });
}

function getData() {
    const apiUrl1 = 'https://fakestoreapi.com/products/1';
    const apiUrl2 = 'https://fakestoreapi.com/products/2';

    return fetchDataFromAPI(apiUrl1)
        .then(data1 => {
            return fetchDataFromAPI(apiUrl2)
                .then(data2 => {
                    const combinedResult = {
                        data1: data1,
                        data2: data2
                    };
                    return combinedResult;
                });
        });
}

getData()
    .then(combinedResult => {
        console.log(combinedResult);
    })
    .catch(error => {
        console.error(error);
    });

const loadAlproc=()=>{
    fetch('https://fakestoreapi.com/products')
        .then(res=>res.json())
        .then((data)=>{
            displayProduct(data);
        });
};

const displayProduct=(product)=>{
     const productContainer=document.getElementById("product-container");
     product.forEach(product => {
        console.log(product)
        const div=document.createElement("div");
        div.classList.add("cart");
        div.innerHTML=`
        <img class="card-img" src=${product.image} alt="">
        <h4>${product.title.slice(0,50)}</h4>
        <p>${product.description.slice(0,50)}</p>
        <h3>${product.price}</h3>
        <button onclick=sinlPo('${product.id}')>Details</button>
        <button onclick="handleadtocart('${product.title}',${product.price})">Add to cart</button>
        `;
        productContainer.appendChild(div);
     });
};

const handleadtocart=(name,price)=>{
    const cardcnt=document.getElementById("countt").innerText;
    let convetcnt=parseInt(cardcnt);
    convetcnt=convetcnt+1;
    document.getElementById("countt").innerText=convetcnt;
    console.log(convetcnt);


    const container=document.getElementById("cart-main-container")
    const div=document.createElement("div")
    div.classList.add("prictit")
    div.innerHTML=`
    <p>${name.slice(0,10)}</p>
    <h3 class="price">${price}</h3>`
    container.appendChild(div);
    updateTot();
}

const updateTot=()=>{
  const allPric=document.getElementsByClassName("price");
  let count=0;
  for(const element of allPric){
    count=count+parseFloat(element.innerText);
  }
  document.getElementById("total").innerText=count.toFixed(2);
}

loadAlproc()

const sinlPo=(id)=>{
    console.log(id);
    fetch(`https://fakestoreapi.com/products/${id}`)
    .then(res=>res.json())
    .then(json=>console.log(json))
}
// const target=document.getElementById("title");
// target.style.color="red";

// const boxes=document.getElementsByClassName("box");

// for(let i=0;i<boxes.length;i++)
//     {
//         // if(i==3)
//         //     {
//         //         boxes[i].style.backgroundColor="green"
//         //     }
//         // else{
//         //     boxes[i].style.backgroundColor="blue"
//         // }
//         boxes[i].style.backgroundColor="orange"
//         if(boxes[i].innerText=="Box 5"){
//           boxes[i].style.backgroundColor="blue"
// }
//     }

// const target=document.getElementsByClassName("h1")
// target.style.color="blue";


// document.getElementById("ache").addEventListener("click",(event)=>{
//     const intp=document.getElementById("nai").value;
//     const faka=document.getElementById("faka");

//     const p=document.createElement("p");
//     p.innerText=intp;

//     faka.appendChild(p);
//     document.getElementById("nai").value="";
// });


document.getElementById("ache").addEventListener("click",(event)=>{
    const intp=document.getElementById("nai").value;

    const hi=document.getElementById("faka");
    const p=document.createElement("p");
    p.classList.add("child");
    p.innerText=intp;
    hi.appendChild(p);
    document.getElementById("nai").value="";

    const allComen=document.getElementsByClassName("child");

    for(const element of allComen){
        element.addEventListener("click",(event)=>{
            event.target.parentNode.removeChild(element);
        })
    }
})

fetch("https://jsonplaceholder.typicode.com/users")
.then(res=>res.json())
.then(data=>{
    displayData(data);
})
.catch((err)=>{
    console.log(err);
});

const displayData=(userData)=>{
    const container=document.getElementById("user-data");
    
    userData.forEach(user=>{
        const div=document.createElement("div");
        div.classList.add("user");

        div.innerHTML=`
        <h4>Title</h4>
        <p>DEscription</p>
        <button>Details</button>
        `;
        container.appendChild(div);
    })
}
const milestoneData=JSON.parse(jsonData).data

function loadMilestones(){
    const milestones=document.querySelector('.milestones');
    milestones.innerHTML=milestoneData.map(function(milestone){
        return `<div class="milestone border-b">
            <div class="flex">
              <div class="checkbox"><input type="checkbox" /></div>
              <div onclick=openMilestone(this,${milestone._id})>
                <p>
                  ${milestone.name}
                  <span><i class="fas fa-chevron-down"></i></span>
                </p>
              </div>
            </div>
            <div class="hidden_panel">
            ${milestone.modules.map(function(module){
                return `<div class="module border-b">
                <p>${module.name}</p>
              </div>`;
            }).join("")}
              
            </div>
          </div>`;
    }).join("")
}

function openMilestone(milestoneCnt,id){
    const CurentSection=milestoneCnt.parentNode.nextElementSibling;

    const showSection=document.querySelector(".show");
    if(!CurentSection.classList.contains("show") && showSection){
        showSection.classList.remove("show");
    }
    CurentSection.classList.toggle("show");
    loadImg(id);
}
function loadImg(id){
const mImg=document.querySelector('.milestoneImage');
const mTitle=document.querySelector('.title');
const mDet=document.querySelector('.details');

   mImg.src=milestoneData[id].image;
   mTitle.innerHTML=milestoneData[id].name;
   mDet.innerText=milestoneData[id].description;
}
loadMilestones()
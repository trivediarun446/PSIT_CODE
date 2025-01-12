let searchForm =document.querySelector('.search-form'); /*here a create a variable of name seachForm in this  */
// we use querySelector function to retrive the element from the document 
document.querySelector('#search-btn').onclick = () =>
{
    // here I write a code for clicking on a item it will active 
    searchForm.classList.toggle('active');
}
import React from 'react'

const List = ({items}) => {
  return (
    <div>
        <ul>
      { 
        items.map(ele=>(<><li>{ele}</li> <br /></>))
      }
        </ul>
    </div>
  )
}

export default List

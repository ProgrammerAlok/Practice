import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'

import Header from './components/Header'
import Person from './components/Person'
import List from './components/List'
import Button from './components/Button'

function App() {
  const click = ()=>{
    document.body.style.background = "red"
   
    setTimeout(()=>{
      document.body.style.background = "blue"
    }, 2000)
  }
  const items = ["item1", 'item2', 'item3', 'item4']
  return (
    <>
      <Header title={"I am title"} />
      <Person name={"Alok Paul"} age={"21"} />
      <List items={items} />
      <Button text={'btn'} onClick={click} />
    </>
  )
}

export default App

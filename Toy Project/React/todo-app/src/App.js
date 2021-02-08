import React, { useState } from 'react';
import TodoTemplate from './components/TodoTemplate';
import TodoInsert from './components/TodoInsert';
import TodoList from './components/TodoList';

const App = () => {
  const [todos, setTodos] = useState([
    {
      id: 1,
      text: '오늘의 운동 하기',
      checked: true,
    },
    {
      id: 2,
      text: '삼시세끼 잘 챙겨먹기',
      checked: true,
    },
    {
      id: 3,
      text: '밤에 일찍 자기',
      checked: false,
    },
  ]);
  return (
    <TodoTemplate>
      <TodoInsert />
      <TodoList todos={todos} />
    </TodoTemplate>
  );
};

export default App;

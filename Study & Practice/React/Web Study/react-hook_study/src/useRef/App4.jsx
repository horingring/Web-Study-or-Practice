import React, { useEffect, useState, useRef } from "react";
// import ReactDOM from "react-dom";

const App4 = () => {
  const potato = useRef();
  setTimeout(() => console.log(potato.current.focus()), 5000);
  return (
    <div className="App4">
      <div>Hi</div>
      <input ref={potato} placeholder="la" />
    </div>
  );
};

// const rootElement = document.getElementById("root");
// ReactDOM.render(<App />, rootElement);

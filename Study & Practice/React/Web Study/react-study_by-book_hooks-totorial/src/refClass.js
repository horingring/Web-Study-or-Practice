import React, { Component } from "react";

class refClass extends Component {
  id = 1;
  setId = (n) => {
    this.id = n;
  };
  printId = () => {
    console.log(this.id);
  };
  render() {
    return (
      <div>
        <p>
          이 컴포넌트는 refFunctional.js를 class component로 작성한 것입니다.
        </p>
        <p>클래스형 컴포넌트에서 '로컬변수'는 위와 같이 작성하면 됩니다.</p>
        <p>자세한 내용은 교재 p.211-212을 참고해 주세요.</p>
      </div>
    );
  }
}

export default refClass;

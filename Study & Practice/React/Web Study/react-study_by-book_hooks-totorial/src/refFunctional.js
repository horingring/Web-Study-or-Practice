import React from "react";

const refFunctional = () => {
  const id = useRef(1);
  const setId = (n) => {
    id.current = n;
  };
  const printId = () => {
    console.log(id.current);
  };
  return (
    <div>
      <p>이 컴포넌트는 refClass.js를 functional component로 작성한 것입니다.</p>
      <p>
        함수형 컴포넌트에서 '로컬변수'를 사용하기 위해서 useRef를 사용할 수
        있습니다.
      </p>
      <p>자세한 내용은 교재 p.211-212을 참고해 주세요.</p>
    </div>
  );
};

export default refFunctional;

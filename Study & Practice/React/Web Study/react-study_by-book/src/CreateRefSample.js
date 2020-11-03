import React, { Component } from 'react';

class CreateRefSample extends Component {
  inputtt = React.createRef();

  handleFocus = () => {
    this.inputtt.current.focus();
  };

  render() {
    return (
      <div>
        <input ref={this.inputtt} />
        <button
          onClick={() => {
            alert('확인 버튼을 누르면, ref로 지정한 input으로 focus됩니다.');
            this.handleFocus();
          }}
        >
          focus하기
        </button>
      </div>
    );
  }
}

export default CreateRefSample;

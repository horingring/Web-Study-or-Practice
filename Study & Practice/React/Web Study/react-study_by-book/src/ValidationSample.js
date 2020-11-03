import React, { Component } from 'react';
import './ValidationSample.css';

class ValidationSample extends Component {
  state = {
    password: '',
    clicked: false,
    validated: false,
  };

  handleChange = (e) => {
    this.setState({
      password: e.target.value,
    });
  };

  handleButtonClick = () => {
    this.setState({
      clicked: true,
      validated: this.state.password === '0000',
    });
  };

  //1103_ReactStudy_ByBook_5.2_ref 사용_handleFocus 정의
  handleFocus = () => {
    this.pppasworddd.focus();
  };
  //

  render() {
    return (
      <div>
        <input //1103_ReactStudy_ByBook_5.2_ref 사용_ref 지정하기(pppasworddd라는 이름으로)
          ref={(ref) => {
            this.pppasworddd = ref;
          }}
          //
          type="password"
          value={this.state.password}
          onChange={this.handleChange}
          className={
            this.state.clicked
              ? this.state.validated
                ? 'success'
                : 'failure'
              : ''
          }
        />
        <button //1103_ReactStudy_ByBook_5.2_ref 사용_onClick 시 ref 지정된 input으로 focus되도록 하기(handleFocus 호출)
          onClick={() => {
            this.handleButtonClick();
            this.handleFocus();
          }}
          //
        >
          검증하기
        </button>
      </div>
    );
  }
}

export default ValidationSample;
